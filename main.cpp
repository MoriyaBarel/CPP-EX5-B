#include <iostream>
#include "sources/OrgChart.hpp"

using namespace ariel;

int main()
{
    OrgChart org;
    org.add_root("Moriya");
    org.add_sub("Moriya", "Lior");
    org.add_sub("Moriya", "Liel");
    org.add_sub("Lior", "Lili");
    OrgChart org_copy(org);
    org.add_sub("Moriya", "Jati");
    for (auto it = org.begin_preorder(); it != org.end_preorder(); ++it)
    {
        std::cout << *it << std::endl;
    }
    std::cout << std::endl;
    for (auto it2 = org_copy.begin_preorder(); it2 != org_copy.end_preorder(); ++it2)
    {
        std::cout << *it2 << std::endl;
    }
}

