//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HAP2LoggingObject.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HAP2ControllerReadRequest : HAP2LoggingObject
{
    NSArray *_originalCharacteristics;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000040bdf
@property(readonly, nonatomic) NSArray *originalCharacteristics; // @synthesize originalCharacteristics=_originalCharacteristics;
@property(readonly, nonatomic) NSArray *characteristics;
- (id)serialize;	// IMP=0x0000000000040a17
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic, getter=isEncrypted) _Bool encrypted;
- (id)initWithCharacteristics:(id)arg1;	// IMP=0x0000000000040996

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

