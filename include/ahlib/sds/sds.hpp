#ifndef AHLIB_SDS_SDS_HPP
#define AHLIB_SDS_SDS_HPP

namespace ahlib { namespace sds {

template <
    typename DataType
>
class forward_list
{
public:
    //typedef true is_forward_list;
    template <
        typename List
    >
    static constexpr DataType front()
    {
        //static_assert( List::is_forward_list, "Type must be a forward list!" );
        return List::first::get();
    }
    template <
        typename List
    >
    static constexpr forward_list push_front(
        DataType value
    )
    {
        return Node< typename List::first >( value );
    }
private:
    /* Inner class definitions */
    // Node
    template <
        typename NextNode
    >
    class Node
    {
    public:
        typedef NextNode next;
        constexpr Node(
            DataType data
        ) : data_( data )
        {
        }
        constexpr DataType get()
        {
            return data_;
        }
    private:
        const DataType data_;
    };
    // End node
    struct End {};
    // Head node
    template <
        typename NextNode
    >
    struct Head{};
    /* End of inner class definitions */

    /* Private method definitions */
    template <
        typename List
    >
    static constexpr auto next()
    {
        return List::next;
    }
    /* End of private method definitions */
};

}} // end of namespace ahlib::sds

#endif
