//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPGreenTeaLoggerWrapper;

__attribute__((visibility("hidden")))
@interface MPMediaLibraryPrivacyContext : NSObject
{
    MPGreenTeaLoggerWrapper *_gtLogger;	// 8 = 0x8
}

+ (void)setDefaultClientWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00600000001e2bf9
+ (id)contextForDefaultClient;	// IMP=0x00600000001e2bce
+ (id)sharedContextForCurrentProcess;	// IMP=0x00600000001e2b9e
+ (void)initialize;	// IMP=0x00600000001e2b98
- (void).cxx_destruct;	// IMP=0x00000000001e2b88
- (void)endAccessInterval;	// IMP=0x00000000001e2b82
- (void)beginAccessInterval;	// IMP=0x00000000001e2b7c
- (void)logPrivacyAccess;	// IMP=0x00000000001e2b76
- (id)initWithPAApplication:(id)arg1;	// IMP=0x00000000001e2b47
- (id)initWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00000000001e2b33
- (id)initWithClientIdentity:(id)arg1;	// IMP=0x00000000001e2b1f
- (id)init;	// IMP=0x00000000001e2b0b

@end

