#include <iostream>

#include <opentelemetry/trace/provider.h>

void f1();
void f2();

int main()
{
  std::cout << "Start.\n";
  std::cout << "main: GetTracerProvider = " << std::hex
            << opentelemetry::trace::Provider::GetTracerProvider() << "\n";
  f1();
  f2();
  std::cout << "main: GetTracerProvider later = " << std::hex
            << opentelemetry::trace::Provider::GetTracerProvider() << "\n";
  std::cout << "Stop.\n";
}
