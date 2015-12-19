template <class A_Type> class calculator
{
  public:
    A_Type multiply(A_Type x, A_Type y);
    A_Type add(A_Type x, A_Type y);
 };
template <class A_Type> A_Type calculator<A_Type>::multiply(A_Type x, A_Type y)
{
  return x*y;
}
template <class A_Type> A_Type calculator<A_Type>::add(A_Type x, A_Type y)
{
  return x+y;
}
