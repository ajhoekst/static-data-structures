#include <ahlib/sds.hpp>

#include <iostream>
#include <type_traits>

int main(
    int argc,
    char** argv
)
{
    typedef ahlib::sds::forward_list< double > FL;

    FL list;
    std::cout << "Is standard layout: " << std::is_standard_layout< FL >::value << std::endl;

    

    return 0;
}
