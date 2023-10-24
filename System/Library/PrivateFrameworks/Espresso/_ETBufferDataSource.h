//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ETBufferDataSource : NSObject
{
    unsigned long long _number_of_data_points;	// 8 = 0x8
    unsigned long long _batchSize;	// 16 = 0x10
    vector_bfe5b09a _nonBatchBlobNames;	// 24 = 0x18
    unordered_map_1368fecc _dataStorage;	// 48 = 0x30
    unordered_map_4a701e3f _blobShapes;	// 88 = 0x58
}

- (id).cxx_construct;	// IMP=0x00000000008cf3bb
- (void).cxx_destruct;	// IMP=0x00000000008cf38e
@property vector_bfe5b09a nonBatchBlobNames; // @synthesize nonBatchBlobNames=_nonBatchBlobNames;
@property unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property unsigned long long number_of_data_points; // @synthesize number_of_data_points=_number_of_data_points;
@property unordered_map_4a701e3f blobShapes; // @synthesize blobShapes=_blobShapes;
@property unordered_map_1368fecc dataStorage; // @synthesize dataStorage=_dataStorage;
- (float *)dataAtIndex:(unsigned long long)arg1 key:(const void *)arg2;	// IMP=0x00000000008cf122
- (id)initWithBlobShapes:(const void *)arg1 numberOfDataPoints:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00000000008cef2e
- (id)dataPointAtIndex:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000008ce6a6
- (unsigned long long)numberOfDataPoints;	// IMP=0x00000000008ce69c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

