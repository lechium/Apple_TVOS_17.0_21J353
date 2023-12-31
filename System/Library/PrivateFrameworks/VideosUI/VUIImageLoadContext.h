//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperation;
@protocol VUIImageLoadingOperation;

__attribute__((visibility("hidden")))
@interface VUIImageLoadContext : NSObject
{
    NSOperation<VUIImageLoadingOperation> *_imageLoadOperation;	// 8 = 0x8
    unsigned long long _requestCount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000052cce
@property(nonatomic) unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property(retain, nonatomic) NSOperation<VUIImageLoadingOperation> *imageLoadOperation; // @synthesize imageLoadOperation=_imageLoadOperation;

@end

