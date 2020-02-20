#include <opentelemetry/trace/provider.h>

void f2() {
  opentelemetry::trace::TracerProvider* p =
    opentelemetry::trace::Provider::GetTracerProvider();
  opentelemetry::trace::Tracer* const t = p->GetTracer("lib2", "0.0.1");
  opentelemetry::nostd::unique_ptr<opentelemetry::trace::Span> s = t->StartSpan("Span2");
}
