//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecord.h>

@class NSString;

@interface CKRecord (HMB)
+ (id)recordFromExternalData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000086278
+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000009baba
- (id)hmbObjectForKey:(id)arg1 encrypted:(_Bool)arg2;	// IMP=0x0010000000085325
- (void)hmbSetObject:(id)arg1 forKey:(id)arg2 encrypted:(_Bool)arg3;	// IMP=0x0010000000085263
- (id)externalID:(id *)arg1;	// IMP=0x0010000000085204
- (id)externalData:(id *)arg1;	// IMP=0x0010000000085152
- (id)hmbDescription;	// IMP=0x001000000008504c
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000009b865

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
