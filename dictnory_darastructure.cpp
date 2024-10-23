int main(){
  Dictionary<int,string> deviceCodeMap(2);
  deviceCodeMap.add(1,"D1");
  deviceCodeMap.add(2,"D2");
  deviceCodeMap.add(3,"D3");
  deviceCodeMap.add(4,"D4");

  string deviceName=deviceCodeMap[2];
  cout<<deviceName<<endl;//output:D2

  //Dump All the items from deviceCodeMap
  cout<<deviceCodeMap;
   /*
    output
   Key : Value
   1 : D1
   2 : D2
   3 : D3
   4 : D4
*/ 
  return 0;
}
