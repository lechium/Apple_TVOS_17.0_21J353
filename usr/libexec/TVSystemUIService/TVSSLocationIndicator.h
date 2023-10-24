//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVSSLocationIndicator : NSObject
{
    long long _displayLocation;	// 8 = 0x8
}

@property(readonly, nonatomic) long long displayLocation; // @synthesize displayLocation=_displayLocation;
- (id)stateDumpBuilder;	// IMP=0x00100000000370b0
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000037000
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000036f60
- (id)succinctDescriptionBuilder;	// IMP=0x0010000000036eb0
- (id)succinctDescription;	// IMP=0x0010000000036e40
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000036bb0
- (id)initLocationIndicatorWithDisplayLocation:(long long)arg1;	// IMP=0x0010000000036b20

// Remaining properties
@property(readonly) Class superclass;

@end

