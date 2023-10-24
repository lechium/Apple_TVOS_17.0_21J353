//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRUserIdentity, NSString;

@interface MRDFastSyncGroupSessionParticipant : NSObject
{
    _Bool _connected;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    MRUserIdentity *_identity;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000003080
@property(readonly, nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(readonly, nonatomic) MRUserIdentity *identity; // @synthesize identity=_identity;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000003058
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000002fb2
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1 identity:(id)arg2 connected:(_Bool)arg3;	// IMP=0x0010000000002e00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

