project(${TINY_TRACER_ENGINE})

include_directories(public)

# lookup all implementation files
aux_source_directory(impl ENGINE_IMPL_FILES)
message("<==== Found IMPL files:\n" ${TINY_TRACER_CORE_IMPL_FILES} "\n====>")

# TODO: make a static library here, so that unit tests target could link to it
add_library(${TINY_TRACER_ENGINE} STATIC ${ENGINE_IMPL_FILES})
target_include_directories(${TINY_TRACER_ENGINE} PUBLIC public)