//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOutputStream, NSString;

@interface KVStreamProfileWriter : NSObject
{
    NSOutputStream *_stream;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002785e
- (_Bool)finishProfile:(id *)arg1;	// IMP=0x0000000000027856
- (_Bool)finishDataset:(id *)arg1;	// IMP=0x000000000002784e
- (_Bool)addItem:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000275ad
- (_Bool)startDataset:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002742c
- (_Bool)startProfile:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000027277
- (id)initWithOutputStream:(id)arg1;	// IMP=0x00000000000271f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
