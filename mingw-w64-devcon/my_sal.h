#pragma once

// Note: this file is incomplete

// Pointer parameters
// _In_ and _Out_ are already in MinGW's sal.h
#define _Inout_
#define _In_z_
#define _Inout_z_
#define _In_reads_(s)
#define _In_reads_bytes_(s)
#define _In_reads_z_(s)
#define _In_reads_or_z_(s)
#define _Out_writes_(s)
#define _Out_writes_bytes_(s)
#define _Out_writes_z_(s)
#define _Inout_updates_(s)
#define _Inout_updates_bytes_(s)
#define _Inout_updates_bytes_(s)
#define _Inout_updates_z_(s)
#define _Out_writes_to_(s,c)
#define _Out_writes_bytes_to_(s,c)
#define _Out_writes_bytes_to_(s,c)
#define _Out_writes_all_(s)
#define _Out_writes_bytes_all_(s)
#define _Inout_updates_to_(s,c)
#define _Inout_updates_bytes_to_(s,c)
#define _Inout_reads_to_ptr_(p)
#define _In_reads_to_ptr_(p)
#define _In_reads_to_ptr_z_(p)
#define _Out_writes_to_ptr_(p)
#define _Out_writes_to_ptr_z(p)

// Output pointer parameters
#define _Outptr_
#define _Outptr_opt_
#define _Outptr_result_maybenull_
#define _Outptr_opt_result_maybenull_

// Output reference parameters
#define _Outref_
#define _Outref_result_maybenull_
#define _Outref_result_buffer_(s)
#define _Outref_result_bytebuffer_(s)
#define _Outref_result_buffer_to_(s)
#define _Outref_result_bytebuffer_to_(s, c)
#define _Outref_result_buffer_all_(s)
#define _Outref_result_bytebuffer_all_(s)
#define _Outref_result_buffer_maybenull_(s)
#define _Outref_result_bytebuffer_maybenull_(s)
#define _Outref_result_buffer_to_maybenull_(s)
#define _Outref_result_bytebuffer_to_maybenull_(s)
#define _Outref_result_buffer_all_maybenull_(s)
#define _Outref_result_bytebuffer_all_maybenull_(s)

// Success/failure annotations
#define _Success_(expr)

// Don't know where this is documented
#define _Post_writable_byte_size_(s)
