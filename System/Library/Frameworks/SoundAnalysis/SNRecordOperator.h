//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface SNRecordOperator : NSObject
{
    MISSING_TYPE *format;	// 8 = 0x8
    MISSING_TYPE *outputFile;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005f374
- (void)processTerminationWithOptionalError:(id)arg1 portID:(id)arg2 downstreamHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005f7bc
- (void)processInput:(id)arg1 portID:(id)arg2 downstreamHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005f521
- (void)dealloc;	// IMP=0x000000000005f357
- (id)initWithSaveDestination:(id)arg1 format:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005f25c
- (id)init;	// IMP=0x000000000005f0db

@end

