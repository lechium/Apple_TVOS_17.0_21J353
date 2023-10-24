//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVDatasetInfo, NSArray, NSString;

@interface KVJSONDatasetReader : NSObject
{
    KVDatasetInfo *_datasetInfo;	// 8 = 0x8
    NSArray *_items;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000025491
@property(readonly, copy) NSString *description;
- (id)datasetInfo;	// IMP=0x0000000000025414
- (_Bool)enumerateItemsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024fc0
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000024bf9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

