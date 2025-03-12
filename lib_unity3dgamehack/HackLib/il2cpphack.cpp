#include "il2cpphack.hpp"

void il2cpp::Init() {
	std::cout << "new_string" << std::endl;
	using il2cpp_string_new_wrapper = uintptr_t(*)(const char*);
	methods::new_string = LI_FIND_DEF(il2cpp_string_new_wrapper);

	std::cout << "domain_get" << std::endl;
	using il2cpp_domain_get = uintptr_t(*)();

	methods::domain_get = LI_FIND_DEF(il2cpp_domain_get);

	std::cout << "class_get_methods" << std::endl;
	using il2cpp_class_get_methods = uintptr_t(*)(uintptr_t, uintptr_t*);

	methods::class_get_methods = LI_FIND_DEF(il2cpp_class_get_methods);

	std::cout << "method_get_param_count" << std::endl;
	using il2cpp_method_get_param_count = int (*)(uintptr_t);

	methods::method_get_param_count = LI_FIND_DEF(il2cpp_method_get_param_count);

	std::cout << "assembly_get_image" << std::endl;
	using il2cpp_assembly_get_image = uintptr_t(*)(uintptr_t);

	methods::assembly_get_image = LI_FIND_DEF(il2cpp_assembly_get_image);

	std::cout << "domain_get_assemblies" << std::endl;
	using il2cpp_domain_get_assemblies = uintptr_t * (*)(void* domain, uintptr_t* size);

	methods::domain_get_assemblies = LI_FIND_DEF(il2cpp_domain_get_assemblies);

	std::cout << "class_from_name" << std::endl;
	using il2cpp_class_from_name = uintptr_t(*)(uintptr_t, const char*, const char*);

	methods::class_from_name = LI_FIND_DEF(il2cpp_class_from_name);

	std::cout << "resolve_icall" << std::endl;
	using il2cpp_resolve_icall = uintptr_t(*)(const char*);

	methods::resolve_icall = LI_FIND_DEF(il2cpp_resolve_icall);

	std::cout << "field_static_get_value" << std::endl;
	using il2cpp_field_static_get_value = uintptr_t(*)(uintptr_t, uintptr_t*);

	methods::field_static_get_value = LI_FIND_DEF(il2cpp_field_static_get_value);

	std::cout << "class_get_fields" << std::endl;
	using il2cpp_class_get_fields = uintptr_t(*)(uintptr_t, uintptr_t*);

	methods::class_get_fields = LI_FIND_DEF(il2cpp_class_get_fields);

	std::cout << "field_get_offset" << std::endl;
	using il2cpp_field_get_offset = uintptr_t(*)(uintptr_t);

	methods::field_get_offset = LI_FIND_DEF(il2cpp_field_get_offset);

	std::cout << "object_new" << std::endl;
	using il2cpp_object_new = uintptr_t(*)(uintptr_t);

	methods::object_new = LI_FIND_DEF(il2cpp_object_new);

	std::cout << "runtime_class_init" << std::endl;
	using il2cpp_runtime_class_init = uintptr_t(*)(uintptr_t);

	methods::runtime_class_init = LI_FIND_DEF(il2cpp_runtime_class_init);
	std::cout << "Done" << std::endl;
}
