//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TUUserConfiguration;

@interface CSDUserConfigurationMigrator : NSObject
{
    TUUserConfiguration *_userConfiguration;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000013e1e6
@property(readonly, nonatomic) TUUserConfiguration *userConfiguration; // @synthesize userConfiguration=_userConfiguration;
- (void)migrateConversationLinkBaseURL;	// IMP=0x001000000013df98
- (void)migrateAnnounceCalls;	// IMP=0x001000000013dd47
- (void)perform;	// IMP=0x001000000013dd19
- (id)init;	// IMP=0x001000000013dcc3

@end

