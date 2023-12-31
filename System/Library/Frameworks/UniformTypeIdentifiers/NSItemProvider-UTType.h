//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSItemProvider.h>

@class NSArray;

@interface NSItemProvider (UTType)
- (id)loadFileRepresentationForContentType:(id)arg1 openInPlace:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x003000000000cbc1
- (id)loadDataRepresentationForContentType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x003000000000cb4d
- (id)registeredContentTypesConformingToContentType:(id)arg1;	// IMP=0x003000000000c96b
@property(readonly, copy, nonatomic) NSArray *registeredContentTypesForOpenInPlace;
@property(readonly, copy, nonatomic) NSArray *registeredContentTypes;
- (void)registerFileRepresentationForContentType:(id)arg1 visibility:(long long)arg2 openInPlace:(_Bool)arg3 loadHandler:(CDUnknownBlockType)arg4;	// IMP=0x003000000000c625
- (void)registerDataRepresentationForContentType:(id)arg1 visibility:(long long)arg2 loadHandler:(CDUnknownBlockType)arg3;	// IMP=0x003000000000c5bd
- (id)initWithContentsOfURL:(id)arg1 contentType:(id)arg2 openInPlace:(_Bool)arg3 coordinated:(_Bool)arg4 visibility:(long long)arg5;	// IMP=0x003000000000c21a
@end

