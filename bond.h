
// function prototypes
double getParValue();
int getNumOfCoupons();
double getCouponRate();
double getRequiredYield();
double getMaturityYears();
bool isZeroCoupon(int numCoupons);
double getrequiredYieldPerPeriod(double yield, int numCoupons);
double getcouponAmount(double couponRate, int numCoupons, double parValue);
double getPeriods(double maturity, int numCoupons);
double getBondPrice(double parValue, double couponAmount, double requiredyieldPerPeriod, double periods);
double getZeroBondPrice(double parValue, double requiredyieldPerPeriod, double periods);
void displayBondPrice(double bondPrice);
void displayErrorMessage();
