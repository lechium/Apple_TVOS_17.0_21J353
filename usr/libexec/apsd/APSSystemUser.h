//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface APSSystemUser : NSObject
{
    NSString *_userID;	// 8 = 0x8
    unsigned char _uuid[16];	// 16 = 0x10
    NSString *_status;	// 32 = 0x20
    _Bool _daemonUser;	// 40 = 0x28
    NSMutableDictionary *_guestUserCache;	// 48 = 0x30
}

+ (id)allSystemUsers;	// IMP=0x00400000000909dc
+ (id)allDaemonUserIDs;	// IMP=0x00100000000907fb
+ (id)allConsoleUserIDs;	// IMP=0x00100000000907e2
+ (id)systemUserWithUID:(unsigned int)arg1;	// IMP=0x00100000000902b0
+ (id)systemUserWithUserID:(id)arg1;	// IMP=0x00100000000901bf
- (void).cxx_destruct;	// IMP=0x0020000000090a66
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(readonly, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (id)debugDescription;	// IMP=0x00100000000909f5
- (void)removeUser;	// IMP=0x00100000000905ea
- (_Bool)isDifferentUser;	// IMP=0x00100000000905e2
- (_Bool)isRootUser;	// IMP=0x00100000000905c5
- (_Bool)isGuestUser;	// IMP=0x00100000000905bd
- (_Bool)isDaemonUser;	// IMP=0x00100000000905b4
- (_Bool)isLoggedOut;	// IMP=0x0010000000090597
- (_Bool)isLoggedIn;	// IMP=0x001000000009057a
@property(readonly, nonatomic) unsigned int uid;
- (id)initWithUserID:(id)arg1;	// IMP=0x0010000000090321

@end
