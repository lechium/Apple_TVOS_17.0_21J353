//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class AWDHomeKitCameraIDSSessionSetup, AWDHomeKitCameraSnapshotIDSTransfer, AWDHomeKitCameraSnapshotMessaging, AWDHomeKitVendorInformation, NSString;

__attribute__((visibility("hidden")))
@interface AWDHomeKitCameraSnapshot : PBCodable
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _certified;	// 16 = 0x10
    AWDHomeKitCameraSnapshotMessaging *_controllerMessaging;	// 24 = 0x18
    unsigned int _errorCode;	// 32 = 0x20
    AWDHomeKitCameraIDSSessionSetup *_idsSessionSetup;	// 40 = 0x28
    AWDHomeKitCameraSnapshotIDSTransfer *_phoneToWatch;	// 48 = 0x30
    unsigned int _receivedSnapshotFromAccessory;	// 56 = 0x38
    AWDHomeKitCameraSnapshotMessaging *_residentMessaging;	// 64 = 0x40
    AWDHomeKitCameraSnapshotIDSTransfer *_residentToPhone;	// 72 = 0x48
    unsigned int _sentSnapshotRequestToAccessory;	// 80 = 0x50
    NSString *_sessionID;	// 88 = 0x58
    unsigned int _underlyingErrorCode;	// 96 = 0x60
    NSString *_underlyingErrorDomain;	// 104 = 0x68
    AWDHomeKitVendorInformation *_vendorDetails;	// 112 = 0x70
    AWDHomeKitCameraSnapshotMessaging *_watchMessaging;	// 120 = 0x78
    _Bool _forNotification;	// 128 = 0x80
    _Bool _isLocal;	// 129 = 0x81
    struct {
        unsigned int timestamp:1;
        unsigned int certified:1;
        unsigned int errorCode:1;
        unsigned int receivedSnapshotFromAccessory:1;
        unsigned int sentSnapshotRequestToAccessory:1;
        unsigned int underlyingErrorCode:1;
        unsigned int forNotification:1;
        unsigned int isLocal:1;
    } _has;	// 132 = 0x84
}

- (void).cxx_destruct;	// IMP=0x0000000000567299
@property(nonatomic) unsigned int underlyingErrorCode; // @synthesize underlyingErrorCode=_underlyingErrorCode;
@property(retain, nonatomic) NSString *underlyingErrorDomain; // @synthesize underlyingErrorDomain=_underlyingErrorDomain;
@property(retain, nonatomic) AWDHomeKitCameraSnapshotIDSTransfer *phoneToWatch; // @synthesize phoneToWatch=_phoneToWatch;
@property(retain, nonatomic) AWDHomeKitCameraSnapshotIDSTransfer *residentToPhone; // @synthesize residentToPhone=_residentToPhone;
@property(retain, nonatomic) AWDHomeKitCameraSnapshotMessaging *residentMessaging; // @synthesize residentMessaging=_residentMessaging;
@property(retain, nonatomic) AWDHomeKitCameraSnapshotMessaging *controllerMessaging; // @synthesize controllerMessaging=_controllerMessaging;
@property(retain, nonatomic) AWDHomeKitCameraSnapshotMessaging *watchMessaging; // @synthesize watchMessaging=_watchMessaging;
@property(nonatomic) unsigned int receivedSnapshotFromAccessory; // @synthesize receivedSnapshotFromAccessory=_receivedSnapshotFromAccessory;
@property(nonatomic) unsigned int sentSnapshotRequestToAccessory; // @synthesize sentSnapshotRequestToAccessory=_sentSnapshotRequestToAccessory;
@property(retain, nonatomic) AWDHomeKitCameraIDSSessionSetup *idsSessionSetup; // @synthesize idsSessionSetup=_idsSessionSetup;
@property(nonatomic) _Bool forNotification; // @synthesize forNotification=_forNotification;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // @synthesize vendorDetails=_vendorDetails;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000566e16
- (unsigned long long)hash;	// IMP=0x0000000000566bba
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000566846
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000566584
- (void)copyTo:(id)arg1;	// IMP=0x0000000000566359
- (void)writeTo:(id)arg1;	// IMP=0x0000000000566120
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000056594e
- (id)dictionaryRepresentation;	// IMP=0x00000000005653d3
- (id)description;	// IMP=0x0000000000565324
@property(nonatomic) _Bool hasUnderlyingErrorCode;
@property(readonly, nonatomic) _Bool hasUnderlyingErrorDomain;
@property(readonly, nonatomic) _Bool hasPhoneToWatch;
@property(readonly, nonatomic) _Bool hasResidentToPhone;
@property(readonly, nonatomic) _Bool hasResidentMessaging;
@property(readonly, nonatomic) _Bool hasControllerMessaging;
@property(readonly, nonatomic) _Bool hasWatchMessaging;
@property(nonatomic) _Bool hasReceivedSnapshotFromAccessory;
@property(nonatomic) _Bool hasSentSnapshotRequestToAccessory;
@property(readonly, nonatomic) _Bool hasIdsSessionSetup;
@property(nonatomic) _Bool hasForNotification;
@property(nonatomic) _Bool hasIsLocal;
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasTimestamp;
- (int)StringAsCertified:(id)arg1;	// IMP=0x0000000000564fdf
- (id)certifiedAsString:(int)arg1;	// IMP=0x0000000000564f97
@property(nonatomic) _Bool hasCertified;
@property(nonatomic) int certified; // @synthesize certified=_certified;
@property(readonly, nonatomic) _Bool hasVendorDetails;

@end

