//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface WFWebViewLink : NSObject
{
    NSURL *_href;	// 8 = 0x8
    struct CGRect _rect;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000100c5
@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(readonly, nonatomic) NSURL *href; // @synthesize href=_href;
- (id)initWithHref:(id)arg1 rect:(struct CGRect)arg2;	// IMP=0x0000000000010008

@end

