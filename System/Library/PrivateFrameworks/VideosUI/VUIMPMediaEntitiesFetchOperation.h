//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray, NSError, NSOperationQueue, VUIMPMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIMPMediaEntitiesFetchOperation : VUIAsynchronousOperation
{
    NSArray *_requests;	// 8 = 0x8
    NSArray *_responses;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    NSOperationQueue *_privateQueue;	// 32 = 0x20
    VUIMPMediaLibrary *_mediaLibrary;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000db720
@property(retain, nonatomic) VUIMPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSArray *responses; // @synthesize responses=_responses;
@property(copy, nonatomic) NSArray *requests; // @synthesize requests=_requests;
- (void)executionDidBegin;	// IMP=0x00000000000daf86
- (id)initWithMediaLibrary:(id)arg1 requests:(id)arg2;	// IMP=0x00000000000dae41
- (id)init;	// IMP=0x00000000000dadd2

@end

