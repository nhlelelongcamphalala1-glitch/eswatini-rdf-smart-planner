#include <iostream>
#include <string>

using namespace std;

/**
 * RDF Project Evaluation Tool
  * This system calculates the 10% local contribution threshold 
   * as required by the Eswatini Regional Development Fund guidelines.
    */
    class RDFProject {
    public:
        string businessName;
            int memberCount;
                double localCash;
                    double grantRequested;
                        int laborDays;

                            // Standard valuation: E65.00 per person per day for community labor
                                const double DAILY_LABOR_RATE = 65.00;

                                    void validateLocalContribution() {
                                            // Calculate the monetary value of volunteer community labor
                                                    double laborValue = memberCount * laborDays * DAILY_LABOR_RATE;
                                                            
                                                                    // Combine cash and labor to find total community input
                                                                            double totalLocalValue = localCash + laborValue;
                                                                                    
                                                                                            // Total project cost is what the community brings + what the RDF provides
                                                                                                    double totalProjectInvestment = totalLocalValue + grantRequested;

                                                                                                            // Calculate the percentage of the total project funded by the community
                                                                                                                    double contributionPercentage = (totalLocalValue / totalProjectInvestment) * 100;

                                                                                                                            cout << "--- RDF 10% CONTRIBUTION ANALYSIS ---" << endl;
                                                                                                                                    cout << "Project Name: " << businessName << endl;
                                                                                                                                            cout << "Total Project Value: E" << totalProjectInvestment << endl;
                                                                                                                                                    cout << "Total Local Input (Cash + Labor): E" << totalLocalValue << endl;
                                                                                                                                                            cout << "Contribution Percentage: " << contributionPercentage << "%" << endl;

                                                                                                                                                                    // Formal compliance check
                                                                                                                                                                            if (contributionPercentage >= 10.0) {
                                                                                                                                                                                        cout << "STATUS: COMPLIANT. Meets the 10% minimum threshold." << endl;
                                                                                                                                                                                                } else {
                                                                                                                                                                                                            double deficit = (totalProjectInvestment * 0.10) - totalLocalValue;
                                                                                                                                                                                                                        cout << "STATUS: NON-COMPLIANT. Additional E" << deficit << " required in local value." << endl;
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                    };

                                                                                                                                                                                                                                    int main() {
                                                                                                                                                                                                                                        RDFProject currentProject;
                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                // Project Setup
                                                                                                                                                                                                                                                    currentProject.businessName = "Poultry Expansion Project";
                                                                                                                                                                                                                                                        currentProject.memberCount = 12;
                                                                                                                                                                                                                                                            currentProject.localCash = 2500.00;
                                                                                                                                                                                                                                                                currentProject.grantRequested = 45000.00;
                                                                                                                                                                                                                                                                    currentProject.laborDays = 10;

                                                                                                                                                                                                                                                                        currentProject.validateLocalContribution();

                                                                                                                                                                                                                                                                            return 0;
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                            