#include <opentelemetry/trace/provider.h>

#include <iostream>

void f1()
{
  opentelemetry::trace::TracerProvider *p = opentelemetry::trace::Provider::GetTracerProvider();
  std::cout << "f1: GetTracerProvider = " << std::hex << p << "\n";
  opentelemetry::trace::Tracer *const t                          = p->GetTracer("lib1", "0.0.1");
  opentelemetry::nostd::unique_ptr<opentelemetry::trace::Span> s = t->StartSpan("Span1");
  // s->AddEvent(); // pending PR35
}
