//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _GEOPlaceDataPhotoInfo : NSObject
{
    NSURL *_url;	// 8 = 0x8
    struct CGSize _size;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000001341148
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, copy) NSString *description;
- (id)initWithURL:(id)arg1 width:(double)arg2 height:(double)arg3;	// IMP=0x0000000001340fe4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

