/*
 * Copyright (c) 2000-2002 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * Copyright (c) 1999-2003 Apple Computer, Inc.  All Rights Reserved.
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */

#ifndef _SCDYNAMICSTOREKEY_H
#define _SCDYNAMICSTOREKEY_H

#include <sys/cdefs.h>
#include <CoreFoundation/CoreFoundation.h>


/*!
	@header SCDynamicStoreKey
 */


__BEGIN_DECLS

/*
 * SCDynamicStoreKeyCreate*
 * - convenience routines that create a CFString key for an item in the store
 */

/*!
	@function SCDynamicStoreKeyCreate
	@discussion Creates a store key using the given format.
 */
CFStringRef
SCDynamicStoreKeyCreate				(
						CFAllocatorRef	allocator,
						CFStringRef	fmt,
						...
						);

/*!
	@function SCDynamicStoreKeyCreateNetworkGlobalEntity
 */
CFStringRef
SCDynamicStoreKeyCreateNetworkGlobalEntity	(
						CFAllocatorRef	allocator,
						CFStringRef	domain,
						CFStringRef	entity
						);

/*!
	@function SCDynamicStoreKeyCreateNetworkInterface
 */
CFStringRef
SCDynamicStoreKeyCreateNetworkInterface		(
						CFAllocatorRef	allocator,
						CFStringRef	domain
						);

/*!
	@function SCDynamicStoreKeyCreateNetworkInterfaceEntity
 */
CFStringRef
SCDynamicStoreKeyCreateNetworkInterfaceEntity	(
						CFAllocatorRef	allocator,
						CFStringRef	domain,
						CFStringRef	ifname,
						CFStringRef	entity
						);

/*!
	@function SCDynamicStoreKeyCreateNetworkServiceEntity
 */
CFStringRef
SCDynamicStoreKeyCreateNetworkServiceEntity	(
						CFAllocatorRef	allocator,
						CFStringRef	domain,
						CFStringRef	serviceID,
						CFStringRef	entity
						);

/*!
	@function SCDynamicStoreKeyCreateComputerName
	@discussion Creates a key that can be used by the SCDynamicStoreSetNotificationKeys()
		function to receive notifications when the current
		computer/host name changes.
	@result A notification string for the current computer/host name.
*/
CFStringRef
SCDynamicStoreKeyCreateComputerName		(
						CFAllocatorRef		allocator
						);

/*!
	@function SCDynamicStoreKeyCreateConsoleUser
	@discussion Creates a key that can be used by the SCDynamicStoreSetNotificationKeys()
		function to receive notifications when the current "Console"
		user changes.
	@result A notification string for the current "Console" user.
*/
CFStringRef
SCDynamicStoreKeyCreateConsoleUser		(
						CFAllocatorRef		allocator
						);

/*!
	@function SCDynamicStoreKeyCreateHostNames
	@discussion Creates a key that can be used in conjunction with
		SCDynamicStoreSetNotificationKeys() to receive
		notifications when the HostNames entity changes.  The
		HostNames entity contains the LocalHostName.
	@result A notification string for the HostNames entity.
*/
CFStringRef
SCDynamicStoreKeyCreateHostNames		(
						CFAllocatorRef		allocator
						);

/*!
	@function SCDynamicStoreKeyCreateLocation
	@discussion Creates a key that can be used in conjunction with
		SCDynamicStoreSetNotificationKeys() to receive
		notifications when the "location" identifier changes.
	@result A notification string for the current "location" identifier.
*/
CFStringRef
SCDynamicStoreKeyCreateLocation			(
						CFAllocatorRef		allocator
						);

/*!
	@function SCDynamicStoreKeyCreateProxies
	@discussion Creates a key that can be used by the SCDynamicStoreSetNotificationKeys()
		function to receive notifications when the current network proxy
		settings (HTTP, FTP, ...) are changed.
	@result A notification string for the current proxy settings.
*/
CFStringRef
SCDynamicStoreKeyCreateProxies			(
						CFAllocatorRef		allocator
						);

__END_DECLS

#endif /* _SCDYNAMICSTOREKEY_H */
