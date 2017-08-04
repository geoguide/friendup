/*©mit**************************************************************************
*                                                                              *
* This file is part of FRIEND UNIFYING PLATFORM.                               *
* Copyright 2014-2017 Friend Software Labs AS                                  *
*                                                                              *
* Permission is hereby granted, free of charge, to any person obtaining a copy *
* of this software and associated documentation files (the "Software"), to     *
* deal in the Software without restriction, including without limitation the   *
* rights to use, copy, modify, merge, publish, distribute, sublicense, and/or  *
* sell copies of the Software, and to permit persons to whom the Software is   *
* furnished to do so, subject to the following conditions:                     *
*                                                                              *
* The above copyright notice and this permission notice shall be included in   *
* all copies or substantial portions of the Software.                          *
*                                                                              *
* This program is distributed in the hope that it will be useful,              *
* but WITHOUT ANY WARRANTY; without even the implied warranty of               *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                 *
* MIT License for more details.                                                *
*                                                                              *
*****************************************************************************©*/
/** @file
 * 
 *  User Manager
 *
 * file contain definitions related to UserManager
 *
 *  @author PS (Pawel Stefanski)
 *  @date created 11/07/2016
 */

#ifndef __SYSTEM_USER_USER_MANAGER_REMOTE_H__
#define __SYSTEM_USER_USER_MANAGER_REMOTE_H__

#include <core/types.h>
#include "user_session.h"
#include "user_group.h"
#include "user.h"
#include "remote_user.h"
#include "user_manager.h"

//
//
//

int UMAddGlobalRemoteUser( UserManager *um, const char *name, const char *sessid, const char *hostname );

//
//
//

int UMRemoveGlobalRemoteUser( UserManager *um, const char *name, const char *hostname );

//
//
//

int UMAddGlobalRemoteDrive( UserManager *um, const char *locuname, const char *uname, const char *authid, const char *hostname, char *localDevName, char *remoteDevName, FULONG remoteid );

//
//
//

int UMRemoveGlobalRemoteDrive( UserManager *um, const char *uname, const char *hostname, char *localDevName, char *remoteDevName );

//
//
//

int UMAddRemoteDriveToUser( UserManager *um, CommFCConnection *con, const char *locuname, const char *uname, const char *authid, const char *hostname, char *localDevName, char *remoteDevName, FULONG remoteID );

//
//
//

int UMRemoveRemoteDriveFromUser( UserManager *um, CommFCConnection *con, const char *locuname, const char *uname, const char *authid, const char *hostname, char *localDevName, char *remoteDevName );


#endif //__SYSTEM_USER_USER_MANAGER_REMOTE_H__
