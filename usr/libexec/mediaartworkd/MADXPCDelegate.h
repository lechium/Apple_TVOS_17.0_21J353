//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADArtworkServer, NSString;

@interface MADXPCDelegate : NSObject
{
    MADArtworkServer *_artworkService;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000029ae
@property(retain, nonatomic) MADArtworkServer *artworkService; // @synthesize artworkService=_artworkService;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000002850
- (id)init;	// IMP=0x00100000000027e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
