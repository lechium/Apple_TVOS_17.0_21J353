//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray, NSError, VUIPlistMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIPlistMediaEntitiesFetchOperation : VUIAsynchronousOperation
{
    NSArray *_requests;	// 8 = 0x8
    NSArray *_responses;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    VUIPlistMediaLibrary *_mediaLibrary;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000014a22b
@property(retain, nonatomic) VUIPlistMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSArray *responses; // @synthesize responses=_responses;
@property(copy, nonatomic) NSArray *requests; // @synthesize requests=_requests;
- (id)_fetchResponseWithMediaEntities:(id)arg1 request:(id)arg2;	// IMP=0x0000000000149e09
- (id)_collectionsFetchResponseWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000014990a
- (id)_itemsFetchResponseWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001494f0
- (id)_mediaEntityKindForRequest:(id)arg1;	// IMP=0x000000000014942f
- (void)executionDidBegin;	// IMP=0x00000000001490be
- (id)initWithMediaLibrary:(id)arg1 requests:(id)arg2;	// IMP=0x0000000000148f9b
- (id)init;	// IMP=0x0000000000148f2c

@end

