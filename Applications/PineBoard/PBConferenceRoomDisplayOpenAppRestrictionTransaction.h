//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class PBOpenApplicationRequest;

@interface PBConferenceRoomDisplayOpenAppRestrictionTransaction : BSTransaction
{
    PBOpenApplicationRequest *_request;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000011fff5
@property(readonly, nonatomic) PBOpenApplicationRequest *request; // @synthesize request=_request;
- (void)_begin;	// IMP=0x001000000011fd57
- (id)initWithRequest:(id)arg1;	// IMP=0x001000000011fc68

@end

