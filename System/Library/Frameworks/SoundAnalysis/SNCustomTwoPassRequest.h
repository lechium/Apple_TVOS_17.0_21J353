//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SNTwoPassConfiguration;

__attribute__((visibility("hidden")))
@interface SNCustomTwoPassRequest : NSObject
{
    CDUnknownBlockType _createSecondPassControllerFunction;	// 8 = 0x8
    SNTwoPassConfiguration *_twoPassConfiguration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000c23d4
@property(readonly) SNTwoPassConfiguration *twoPassConfiguration; // @synthesize twoPassConfiguration=_twoPassConfiguration;
- (id)createSecondPassController;	// IMP=0x00000000000c23b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

