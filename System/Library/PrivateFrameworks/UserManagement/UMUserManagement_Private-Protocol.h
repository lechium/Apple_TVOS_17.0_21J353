//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserManagement/NSObject-Protocol.h>

@class NSArray, UMUser;

@protocol UMUserManagement_Private <NSObject>
@property(readonly, nonatomic) __weak NSArray *allUsersUnfiltered;
@property(readonly, nonatomic) __weak NSArray *allUsers;
- (_Bool)userExists:(UMUser *)arg1;
@end
