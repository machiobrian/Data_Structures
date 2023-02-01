#include <iostream>

class KalmanFilter {
    public:
        KalmanFilter(double q, double r, double p, double initial_value)
        {
            this->q = q; //this is a pointer.
            this->r = r;
            this->p = p;
            this->x = initial_value;
        }

        double getEstimate(){
            return x;
        }

        void updateEstimate(double measurement)
        {
            x = (p+q) / (p+q+r)*measurement + (r+x)/(p+q+r);
            p = (r*p) / (p+q+r);
        }

    private:
        double q;
        double r;
        double p;
        double x;
};

int main()
{
    KalmanFilter kf(0.1, 0.1, 0.1, 0);

    double measurement = 10;
    kf.updateEstimate(measurement);
    std::cout << "Estimated Value: " << kf.getEstimate() << std::endl;

    measurement = 12;
    kf.updateEstimate(measurement);
    std::cout << "Estimated Value: " << kf.getEstimate() << std::endl;

    return 0; 
}