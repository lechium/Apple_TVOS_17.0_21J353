//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TrustedPeersHelperEgoPeerStatus : NSObject
{
    _Bool _isExcluded;	// 8 = 0x8
    _Bool _isLocked;	// 9 = 0x9
    unsigned long long _egoStatus;	// 16 = 0x10
    NSString *_egoPeerID;	// 24 = 0x18
    NSString *_egoPeerMachineID;	// 32 = 0x20
    unsigned long long _numberOfPeersInOctagon;	// 40 = 0x28
    NSDictionary *_viablePeerCountsByModelID;	// 48 = 0x30
    NSDictionary *_peerCountsByMachineID;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001be9aa
- (void).cxx_destruct;	// IMP=0x00200000001be96c
@property _Bool isLocked; // @synthesize isLocked=_isLocked;
@property _Bool isExcluded; // @synthesize isExcluded=_isExcluded;
@property(retain) NSDictionary *peerCountsByMachineID; // @synthesize peerCountsByMachineID=_peerCountsByMachineID;
@property(retain) NSDictionary *viablePeerCountsByModelID; // @synthesize viablePeerCountsByModelID=_viablePeerCountsByModelID;
@property unsigned long long numberOfPeersInOctagon; // @synthesize numberOfPeersInOctagon=_numberOfPeersInOctagon;
@property(retain) NSString *egoPeerMachineID; // @synthesize egoPeerMachineID=_egoPeerMachineID;
@property(retain) NSString *egoPeerID; // @synthesize egoPeerID=_egoPeerID;
@property unsigned long long egoStatus; // @synthesize egoStatus=_egoStatus;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001be70d
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001be326
- (id)description;	// IMP=0x00100000001be293
- (id)initWithEgoPeerID:(id)arg1 egoPeerMachineID:(id)arg2 status:(unsigned long long)arg3 viablePeerCountsByModelID:(id)arg4 peerCountsByMachineID:(id)arg5 isExcluded:(_Bool)arg6 isLocked:(_Bool)arg7;	// IMP=0x00100000001be02d

@end

