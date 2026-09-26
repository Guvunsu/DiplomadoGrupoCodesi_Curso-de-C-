#ifndef VENTAS_H
#define VENTAS_H

class Venta{
	private:
		double subtotal;
		double cant;
		double pre;
		
		public:
		void SetCantidad(double cantidad);
		void SetPrecio(double precio);
		double getSubtotal();
};

#endif
