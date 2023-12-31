//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPersonNameComponents, NSString, UIImage;

@interface TVSSUserImageContent : NSObject
{
    UIImage *_userImage;	// 8 = 0x8
    NSPersonNameComponents *_personNameComponents;	// 16 = 0x10
}

+ (double)defaultUserImageDiameter;	// IMP=0x002000000002f1b0
- (void).cxx_destruct;	// IMP=0x002000000002f660
@property(readonly, copy, nonatomic) NSPersonNameComponents *personNameComponents; // @synthesize personNameComponents=_personNameComponents;
@property(readonly, nonatomic) UIImage *userImage; // @synthesize userImage=_userImage;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x001000000002f4e0
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x001000000002f440
- (id)succinctDescriptionBuilder;	// IMP=0x001000000002f290
- (id)succinctDescription;	// IMP=0x001000000002f220
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002f200
- (Class)preferredVisualizerViewClass;	// IMP=0x001000000002f1d0
- (id)initWithUserImage:(id)arg1 personNameComponents:(id)arg2;	// IMP=0x001000000002f0a0

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

