//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

@class NSString;

@interface NSUUID (HealthKit)
+ (id)hk_v3UUIDWithNameSpace:(id)arg1 name:(id)arg2;	// IMP=0x001000000006c350
+ (id)hk_UUIDWithData:(id)arg1;	// IMP=0x001000000000f5ef
- (id)hk_shortRepresentation;	// IMP=0x001000000006c6d0
- (long long)hk_compare:(id)arg1;	// IMP=0x001000000006c60d
- (id)hk_dataForUUIDBytes;	// IMP=0x001000000000c445
- (id)hk_UUID;	// IMP=0x001000000006cb76

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
