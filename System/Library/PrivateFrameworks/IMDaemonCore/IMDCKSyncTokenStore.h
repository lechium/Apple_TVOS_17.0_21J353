//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMDCKSyncTokenStore : NSObject
{
}

+ (void)persistToken:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000015947
+ (id)tokenForKey:(id)arg1;	// IMP=0x0010000000015819
+ (void)migrateKey:(id)arg1 fromDatabase:(id)arg2;	// IMP=0x0010000000015655
- (void)persistToken:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000155f0
- (id)tokenForKey:(id)arg1;	// IMP=0x000000000001559f
- (void)migrateKey:(id)arg1 fromDatabase:(id)arg2;	// IMP=0x000000000001553a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

