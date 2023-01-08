// #include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

double getParValue()
{
	cout << "Enter the par value: ";
	double parValue;
	cin >> parValue;
	return parValue;
}

int getNumOfCoupons()
{
	cout << "Enter the number of coupons paid in a year (if a zero coupon bond enter 0): ";
	int numCoupons;
	cin >> numCoupons;
	return numCoupons;
}

double getCouponRate()
{
	cout << "Enter the coupon rate (i.e. 15% = 0.15): ";
	double couponRate;
	cin >> couponRate;
	return couponRate;
}

double getRequiredYield()
{
	cout << "Enter the required yield / market intrest rate (i.e. 15% = 0.15): ";
	double yield;
	cin >> yield;
	return yield;
}

double getMaturityYears()
{
	cout << "Enter number of years to maturity : ";
	double maturity;
	cin >> maturity;
	return maturity;
}

bool isZeroCoupon(int numCoupons)
{
	return (numCoupons == 0);
}

double getrequiredYieldPerPeriod(double yield, int numCoupons)
{
	double requiredYieldPerPeriod = yield / numCoupons;
	return requiredYieldPerPeriod;
}

double getcouponAmount(double couponRate, int numCoupons, double parValue)
{
	double couponAmount = (couponRate / numCoupons) * parValue;
	return couponAmount;
}

double getPeriods(double maturityYears, int numCoupons)
{
	double periods = maturityYears * numCoupons;
	return periods;
}

double getBondPrice(double parValue, double couponAmount, double requiredYieldPerPeriod, double periods)
{
	return (couponAmount * ((1 - (1 / pow(1 + requiredYieldPerPeriod, periods))) / requiredYieldPerPeriod)) + (parValue / (pow(1 + requiredYieldPerPeriod, periods)));
}

double getZeroBondPrice(double parValue, double requiredYieldPerPeriod, double periods)
{
	return parValue / pow(1 + requiredYieldPerPeriod, periods);
}

void displayBondPrice(double bondPrice)
{
	cout << fixed << setprecision(2) << "The price of your bond is: " << bondPrice << endl;
}

void displayErrorMessage()
{
	cout << "The number of coupons per year must be zero or greater" << endl;
}