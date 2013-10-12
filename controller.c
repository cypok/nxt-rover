#pragma config(Motor,  motorB,          engineController, tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorC,          turnerController, tmotorNXT, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
  nMotorEncoder[engineController] = 0;
  nMotorEncoder[turnerController] = 0;

  for (;;) {
    int engineVal = nMotorEncoder[engineController];
    int turnerVal = nMotorEncoder[turnerController];

    sendMessageWithParm(1, engineVal, turnerVal);

    wait1Msec(100);
  }
}