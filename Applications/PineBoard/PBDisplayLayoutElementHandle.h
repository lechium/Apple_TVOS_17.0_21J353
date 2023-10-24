//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBSDisplayLayoutElement;
@protocol PBDisplayLayoutElementPublisher;

@interface PBDisplayLayoutElementHandle : NSObject
{
    id <PBDisplayLayoutElementPublisher> _publisher;	// 8 = 0x8
    PBSDisplayLayoutElement *_element;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000230158
@property(retain, nonatomic) PBSDisplayLayoutElement *element; // @synthesize element=_element;
@property(readonly, nonatomic) __weak id <PBDisplayLayoutElementPublisher> publisher; // @synthesize publisher=_publisher;
- (void)update:(CDUnknownBlockType)arg1 withReason:(id)arg2;	// IMP=0x001000000022ff83
- (void)invalidate;	// IMP=0x001000000022ff53
- (id)initWithElement:(id)arg1 publisher:(id)arg2;	// IMP=0x001000000022feb9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

