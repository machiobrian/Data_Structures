// estimate the postition of an object based on 
// a series of measurement of its position

#include <iostream>

class KalmanFilter{
    public:
        KalmanFilter(double q, double p, double r, double initial_value)
        {
            this->q = q; // process noise
            this->p = p; // estimation error covariance
            this->r = r; // measuremetn noise
            this->x = initial_value;
        }

        double getEstimate()
        {
            return x; // returns the current estimate of the position
        }

        void updateEstimates(double measurement)
        {
            // updates the estimated position of an object based on the new measurement
            x = (p+q)/(p+q+r)*measurement + (r*x)/(p+q+r);
            p = (r*p)/(p+q+r);
        }

    private:
        double q;
        double r;
        double p;
        double x;
};


int main()
{
    KalmanFilter kf(0.1,0.1,0.1,0);

    double measurement = 10;
    kf.updateEstimates(measurement);
    std::cout << "Estimated Value: " << kf.getEstimate() << std::endl;

    measurement = 12;
    kf.updateEstimates(measurement);
    std::cout << "Estimated value: " << kf.getEstimate() << std::endl;

    return 0;
}