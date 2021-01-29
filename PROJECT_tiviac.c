void setup_GPIOs()

void main()
{
	int count = 1;
	int mode = 0;
	
	setup_GPIOs();

	while(1)
	{
		if(mode == 0)
		{
			if(count == 1)
			{
				GPIO_PORTB_DATA3_bit = 1;
				GPIO_PORTA_DATA2_bit = 1;
				GPIO_PORTE_DATA1_bit = 1;
				GPIO_PORTC_DATA6_bit = 1;

				delay_ms(3000);
				count++
			}

			else if(count == 2)
			{
				GPIO_PORTE_DATA1_bit = 0;
				GPIO_PORTB_DATA3_bit = 1;
				GPIO_PORTA_DATA2_bit = 1;
				GPIO_PORTE_DATA3_bit = 1;
				GPIO_PORTC_DATA6_bit = 1;

				delay_ms(3000);

				GPIO_PORTE_DATA3_bit = 0;

				delay_ms(1000);

				GPIO_PORTE_DATA2_bit = 1;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 0;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 1;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 0;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 1;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 0;

				count++;
			}

			else if(count == 3)
			{
				GPIO_PORTC_DATA6_bit = 0;
				GPIO_PORTB_DATA3_bit = 1;
				GPIO_PORTA_DATA2_bit = 1;
				GPIO_PORTE_DATA1_bit = 1;
				GPIO_PORTC_DATA4_bit = 1;

				delay_ms(3000);

				GPIO_PORTC_DATA4_bit = 0;

				delay_ms(1000);

				GPIO_PORTC_DATA5_bit = 1;
				delay_ms(300);
				GPIO_PORTC_DATA5_bit = 0;
				delay_ms(300);
				GPIO_PORTC_DATA5_bit = 1;
				delay_ms(300);
				GPIO_PORTC_DATA5_bit = 0;
				delay_ms(300);
				GPIO_PORTC_DATA5_bit = 1;
				delay_ms(300);
				GPIO_PORTC_DATA5_bit = 0;

				count++;
			}
			else if(count == 4)
			{
				GPIO_PORTB_DATA5_bit = 1;
				GPIO_PORTB_DATA3_bit = 0;
				GPIO_PORTA_DATA2_bit = 1;
				GPIO_PORTE_DATA1_bit = 1;
				GPIO_PORTC_DATA6_bit = 1;

				delay_ms(3000);

				GPIO_PORTB_DATA5_bit = 0;

				delay_ms(1000);

				GPIO_PORTB_DATA4_bit = 1;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 0;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 1;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 0;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 1;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 0;

				count++;
			}
			else if(count == 5)
			{
				GPIO_PORTB_DATA0_bit = 1;
				GPIO_PORTB_DATA3_bit = 1;
				GPIO_PORTA_DATA2_bit = 0;
				GPIO_PORTE_DATA1_bit = 1;
				GPIO_PORTC_DATA6_bit = 1;

				delay_ms(3000);

				GPIO_PORTB_DATA0_bit = 0;

				delay_ms(1000);

				GPIO_PORTA_DATA3_bit = 1;
				delay_ms(300);
				GPIO_PORTA_DATA3_bit = 0;
				delay_ms(300);
				GPIO_PORTA_DATA3_bit = 1;
				delay_ms(300);
				GPIO_PORTA_DATA3_bit = 0;
				delay_ms(300);
				GPIO_PORTA_DATA3_bit = 1;
				delay_ms(300);
				GPIO_PORTA_DATA3_bit = 0;

				mode++;
			}

		else
		{
			if(count == 1)
			{
				
				GPIO_PORTB_DATA3_bit = 1;
				GPIO_PORTA_DATA2_bit = 1;
				GPIO_PORTE_DATA1_bit = 1;
				GPIO_PORTC_DATA6_bit = 1;
				GPIO_PORTE_DATA0_bit = 1;
				GPIO_PORTE_DATA5_bit = 1;
				GPIO_PORTB_DATA7_bit = 1;
				GPIO_PORTB_DATA2_bit = 1;

				delay_ms(3000);
				
				GPIO_PORTE_DATA0_bit = 1;
				GPIO_PORTE_DATA5_bit = 1;
				GPIO_PORTB_DATA7_bit = 1;
				GPIO_PORTB_DATA2_bit = 1;
				delay_ms(300);
				GPIO_PORTE_DATA0_bit = 0;
				GPIO_PORTE_DATA5_bit = 0;
				GPIO_PORTB_DATA7_bit = 0;
				GPIO_PORTB_DATA2_bit = 0;
				delay_ms(300);
				GPIO_PORTE_DATA0_bit = 1;
				GPIO_PORTE_DATA5_bit = 1;
				GPIO_PORTB_DATA7_bit = 1;
				GPIO_PORTB_DATA2_bit = 1;
				delay_ms(300);
				GPIO_PORTE_DATA0_bit = 0;
				GPIO_PORTE_DATA5_bit = 0;
				GPIO_PORTB_DATA7_bit = 0;
				GPIO_PORTB_DATA2_bit = 0;
				delay_ms(300);
				GPIO_PORTE_DATA0_bit = 1;
				GPIO_PORTE_DATA5_bit = 1;
				GPIO_PORTB_DATA7_bit = 1;
				GPIO_PORTB_DATA2_bit = 1;
				delay_ms(300);
				GPIO_PORTE_DATA0_bit = 0;
				GPIO_PORTE_DATA5_bit = 0;
				GPIO_PORTB_DATA7_bit = 0;
				GPIO_PORTB_DATA2_bit = 0;
				delay_ms(300);
				count++;

			else if(count == 2)
			{
				
				GPIO_PORTB_DATA3_bit = 1;
				GPIO_PORTA_DATA2_bit = 1;
				GPIO_PORTE_DATA1_bit = 1;
				GPIO_PORTC_DATA6_bit = 1;
				GPIO_PORTE_DATA0_bit = 1;
				GPIO_PORTE_DATA3_bit = 1;
				GPIO_PORTB_DATA1_bit = 1;

				delay_ms(3000);


				GPIO_PORTE_DATA2_bit = 1;
				GPIO_PORTA_DATA3_bit = 1;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 0;
				GPIO_PORTA_DATA3_bit = 0;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 1;
				GPIO_PORTA_DATA3_bit = 1;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 0;
				GPIO_PORTA_DATA3_bit = 0;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 1;
				GPIO_PORTA_DATA3_bit = 1;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 0;
				GPIO_PORTA_DATA3_bit = 0;
				delay_ms(300);

				
				GPIO_PORTE_DATA1_bit = 0;
				GPIO_PORTB_DATA1_bit = 0;
				GPIO_PORTE_DATA4_bit = 1;

				delay_ms(3000);

				GPIO_PORTE_DATA2_bit = 1;
				GPIO_PORTC_DATA5_bit = 1;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 0;
				GPIO_PORTC_DATA5_bit = 0;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 1;
				GPIO_PORTC_DATA5_bit = 1;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 0;
				GPIO_PORTC_DATA5_bit = 0;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 1;
				GPIO_PORTC_DATA5_bit = 1;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 0;
				GPIO_PORTC_DATA5_bit = 0;
				delay_ms(300);

				GPIO_PORTE_DATA0_bit = 0;

				count++;
			}


			else if(count == 3)
			{
				
				GPIO_PORTB_DATA7_bit = 1;
				GPIO_PORTE_DATA3_bit = 0;
				GPIO_PORTB_DATA3_bit = 1;
				GPIO_PORTA_DATA2_bit = 1;
				GPIO_PORTE_DATA1_bit = 1;
				GPIO_PORTC_DATA4_bit = 1;
				GPIO_PORTC_DATA6_bit = 1;

				delay_ms(3000);


				GPIO_PORTE_DATA2_bit = 1;
				GPIO_PORTC_DATA5_bit = 1;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 0;
				GPIO_PORTC_DATA5_bit = 0;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 1;
				GPIO_PORTC_DATA5_bit = 1;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 0;
				GPIO_PORTC_DATA5_bit = 0;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 1;
				GPIO_PORTC_DATA5_bit = 1;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 0;
				GPIO_PORTC_DATA5_bit = 0;
				delay_ms(300);

				
				GPIO_PORTE_DATA4_bit = 0;
				GPIO_PORTC_DATA6_bit = 0;
				GPIO_PORTC_DATA7_bit = 1;

				delay_ms(3000);

				GPIO_PORTB_DATA4_bit = 1;
				GPIO_PORTC_DATA5_bit = 1;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 0;
				GPIO_PORTC_DATA5_bit = 0;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 1;
				GPIO_PORTC_DATA5_bit = 1;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 0;
				GPIO_PORTC_DATA5_bit = 0;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 1;
				GPIO_PORTC_DATA5_bit = 1;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 0;
				GPIO_PORTC_DATA5_bit = 0;
				delay_ms(300);

				GPIO_PORTB_DATA7_bit = 0;

				count++;
			}

			else if(count == 4)
			{
				
				GPIO_PORTB_DATA2_bit = 1;
				GPIO_PORTC_DATA4_bit = 0;
				GPIO_PORTB_DATA3_bit = 1;
				GPIO_PORTB_DATA5_bit = 1;
				GPIO_PORTA_DATA2_bit = 1;
				GPIO_PORTE_DATA1_bit = 1;
				GPIO_PORTC_DATA6_bit = 1;

				delay_ms(3000);


				GPIO_PORTB_DATA4_bit = 1;
				GPIO_PORTC_DATA5_bit = 1;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 0;
				GPIO_PORTC_DATA5_bit = 0;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 1;
				GPIO_PORTC_DATA5_bit = 1;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 0;
				GPIO_PORTC_DATA5_bit = 0;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 1;
				GPIO_PORTC_DATA5_bit = 1;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 0;
				GPIO_PORTC_DATA5_bit = 0;
				delay_ms(300);
				
				GPIO_PORTC_DATA7_bit = 0;
				GPIO_PORTB_DATA3_bit = 0;
				GPIO_PORTB_DATA6_bit = 1;

				delay_ms(3000);

				GPIO_PORTB_DATA4_bit = 1;
				GPIO_PORTA_DATA3_bit = 1;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 0;
				GPIO_PORTA_DATA3_bit = 0;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 1;
				GPIO_PORTA_DATA3_bit = 1;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 0;
				GPIO_PORTA_DATA3_bit = 0;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 1;
				GPIO_PORTA_DATA3_bit = 1;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 0;
				GPIO_PORTA_DATA3_bit = 0;
				delay_ms(300);

				GPIO_PORTB_DATA2_bit = 0;

				count++;
			}

			else if(count == 5)
			{
				
				GPIO_PORTE_DATA5_bit = 1;
				GPIO_PORTB_DATA5_bit = 0;
				GPIO_PORTA_DATA2_bit = 1;
				GPIO_PORTB_DATA3_bit = 1;
				GPIO_PORTB_DATA0_bit = 1;
				GPIO_PORTE_DATA1_bit = 1;
				GPIO_PORTC_DATA6_bit = 1;

				delay_ms(3000);

				GPIO_PORTB_DATA4_bit = 1;
				GPIO_PORTA_DATA3_bit = 1;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 0;
				GPIO_PORTA_DATA3_bit = 0;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 1;
				GPIO_PORTA_DATA3_bit = 1;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 0;
				GPIO_PORTA_DATA3_bit = 0;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 1;
				GPIO_PORTA_DATA3_bit = 1;
				delay_ms(300);
				GPIO_PORTB_DATA4_bit = 0;
				GPIO_PORTA_DATA3_bit = 0;
				delay_ms(300);

				
				GPIO_PORTB_DATA6_bit = 0;
				GPIO_PORTA_DATA2_bit = 0;
				GPIO_PORTB_DATA1_bit = 1;

				delay_ms(3000);

				GPIO_PORTE_DATA2_bit = 1;
				GPIO_PORTA_DATA3_bit = 1;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 0;
				GPIO_PORTA_DATA3_bit = 0;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 1;
				GPIO_PORTA_DATA3_bit = 1;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 0;
				GPIO_PORTA_DATA3_bit = 0;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 1;
				GPIO_PORTA_DATA3_bit = 1;
				delay_ms(300);
				GPIO_PORTE_DATA2_bit = 0;
				GPIO_PORTA_DATA3_bit = 0;
				delay_ms(300);

				GPIO_PORTB_DATA0_bit = 0;
				GPIO_PORTE_DATA5_bit = 0;
				count = 1 ;
			}



			} 
		}



	}
}

void setup_GPIOs()
{
	delay_ms(2000);
	GPIO_Clk_Enable(&GPIO_PORTA);
	GPIO_Config(&GPIO_PORTA, (_GPIO_PINMASK_2 | _GPIO_PINMASK_3), _GPIO_DIR_OUTPUT, (_GPIO_CFG_DIGITAL_ENABLE | _GPIO_CFG_DRIVE_8mA), _GPIO_PINCODE_NONE);

	GPIO_Clk_Enable(&GPIO_PORTB);
	GPIO_Config(&GPIO_PORTA, (_GPIO_PINMASK_0 | _GPIO_PINMASK_1 | _GPIO_PINMASK_2 | _GPIO_PINMASK_3 | _GPIO_PINMASK_4 | _GPIO_PINMASK_5 | _GPIO_PINMASK_6 | _GPIO_PINMASK_7 ), _GPIO_DIR_OUTPUT, (_GPIO_CFG_DIGITAL_ENABLE | _GPIO_CFG_DRIVE_8mA), _GPIO_PINCODE_NONE);


	GPIO_Clk_Enable(&GPIO_PORTC);
	GPIO_Config(&GPIO_PORTA, (_GPIO_PINMASK_4 | _GPIO_PINMASK_5 | _GPIO_PINMASK_6 | _GPIO_PINMASK_7 ), _GPIO_DIR_OUTPUT, (_GPIO_CFG_DIGITAL_ENABLE | _GPIO_CFG_DRIVE_8mA), _GPIO_PINCODE_NONE);


	GPIO_Clk_Enable(&GPIO_PORTE);
	GPIO_Config(&GPIO_PORTA, (_GPIO_PINMASK_0 | _GPIO_PINMASK_1 | _GPIO_PINMASK_2 | _GPIO_PINMASK_3 | _GPIO_PINMASK_4 | _GPIO_PINMASK_5), _GPIO_DIR_OUTPUT, (_GPIO_CFG_DIGITAL_ENABLE | _GPIO_CFG_DRIVE_8mA), _GPIO_PINCODE_NONE);
}