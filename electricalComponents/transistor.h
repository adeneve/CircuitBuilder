
class transistor{
public:
  transistor();
  transistor(float EBvoltageBarrier, float ECvoltageBarrier);
  
  bool currentFlowing();
  void setEBvoltage(float V);
  void setECvoltage(float V);

private:
  float EBvoltageBarrier;
  float ECvoltageBarrier;
  float EBvoltage;
  float ECvoltage;
};
  
