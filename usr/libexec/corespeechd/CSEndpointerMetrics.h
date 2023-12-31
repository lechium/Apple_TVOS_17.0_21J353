//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSServerEndpointFeatures, NSArray, NSDictionary, NSString, OSDFeatures;

@interface CSEndpointerMetrics : NSObject
{
    _Bool _isRequestTimeOut;	// 8 = 0x8
    _Bool _isAnchorTimeBuffered;	// 9 = 0x9
    double _totalAudioRecorded;	// 16 = 0x10
    unsigned long long _endpointBufferHostTime;	// 24 = 0x18
    NSArray *_featuresAtEndpoint;	// 32 = 0x20
    long long _endpointerType;	// 40 = 0x28
    NSDictionary *_serverFeatureLatencyDistribution;	// 48 = 0x30
    NSDictionary *_additionalMetrics;	// 56 = 0x38
    double _trailingSilenceDurationAtEndpoint;	// 64 = 0x40
    NSString *_requestId;	// 72 = 0x48
    OSDFeatures *_osdFeaturesAtEndpoint;	// 80 = 0x50
    CSServerEndpointFeatures *_serverFeaturesAtEndpoint;	// 88 = 0x58
    NSString *_assetConfigVersion;	// 96 = 0x60
    unsigned long long _assetProviderType;	// 104 = 0x68
    double _blkHepAudioOrigin;	// 112 = 0x70
    double _vtExtraAudioAtStartInMs;	// 120 = 0x78
    unsigned long long _firstAudioSampleSensorTimestamp;	// 128 = 0x80
    unsigned long long _endpointHostTime;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000111a61
- (void).cxx_destruct;	// IMP=0x0020000000111a02
@property(nonatomic) unsigned long long endpointHostTime; // @synthesize endpointHostTime=_endpointHostTime;
@property(nonatomic) unsigned long long firstAudioSampleSensorTimestamp; // @synthesize firstAudioSampleSensorTimestamp=_firstAudioSampleSensorTimestamp;
@property(nonatomic) double vtExtraAudioAtStartInMs; // @synthesize vtExtraAudioAtStartInMs=_vtExtraAudioAtStartInMs;
@property(nonatomic) double blkHepAudioOrigin; // @synthesize blkHepAudioOrigin=_blkHepAudioOrigin;
@property(nonatomic) unsigned long long assetProviderType; // @synthesize assetProviderType=_assetProviderType;
@property(retain, nonatomic) NSString *assetConfigVersion; // @synthesize assetConfigVersion=_assetConfigVersion;
@property(nonatomic) _Bool isAnchorTimeBuffered; // @synthesize isAnchorTimeBuffered=_isAnchorTimeBuffered;
@property(nonatomic) _Bool isRequestTimeOut; // @synthesize isRequestTimeOut=_isRequestTimeOut;
@property(retain, nonatomic) CSServerEndpointFeatures *serverFeaturesAtEndpoint; // @synthesize serverFeaturesAtEndpoint=_serverFeaturesAtEndpoint;
@property(retain, nonatomic) OSDFeatures *osdFeaturesAtEndpoint; // @synthesize osdFeaturesAtEndpoint=_osdFeaturesAtEndpoint;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(nonatomic) double trailingSilenceDurationAtEndpoint; // @synthesize trailingSilenceDurationAtEndpoint=_trailingSilenceDurationAtEndpoint;
@property(retain, nonatomic) NSDictionary *additionalMetrics; // @synthesize additionalMetrics=_additionalMetrics;
@property(retain, nonatomic) NSDictionary *serverFeatureLatencyDistribution; // @synthesize serverFeatureLatencyDistribution=_serverFeatureLatencyDistribution;
@property(nonatomic) long long endpointerType; // @synthesize endpointerType=_endpointerType;
@property(retain, nonatomic) NSArray *featuresAtEndpoint; // @synthesize featuresAtEndpoint=_featuresAtEndpoint;
@property(nonatomic) unsigned long long endpointBufferHostTime; // @synthesize endpointBufferHostTime=_endpointBufferHostTime;
@property(nonatomic) double totalAudioRecorded; // @synthesize totalAudioRecorded=_totalAudioRecorded;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001116bb
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000111354
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000111349
- (id)description;	// IMP=0x0010000000111263
- (_Bool)isEnhancedEndpointer;	// IMP=0x0010000000111245
- (id)metricsCopyWithRequestId:(id)arg1 lastAudioChunkHostTime:(unsigned long long)arg2;	// IMP=0x00100000001110e9
- (id)initWithTotalAudioRecorded:(double)arg1 endpointBufferHostTime:(unsigned long long)arg2 featuresAtEndpoint:(id)arg3 endpointerType:(long long)arg4 serverFeatureLatencyDistribution:(id)arg5 additionalMetrics:(id)arg6 trailingSilenceDurationAtEndpoint:(double)arg7 requestId:(id)arg8;	// IMP=0x0010000000110f7a
- (id)initWithTotalAudioRecorded:(double)arg1 endpointBufferHostTime:(unsigned long long)arg2 featuresAtEndpoint:(id)arg3 endpointerType:(long long)arg4 serverFeatureLatencyDistribution:(id)arg5 additionalMetrics:(id)arg6 trailingSilenceDurationAtEndpoint:(double)arg7 requestId:(id)arg8 osdFeatures:(id)arg9 serverFeatures:(id)arg10 isRequestTimeOut:(_Bool)arg11 assetConfigVersion:(id)arg12 assetProviderType:(unsigned long long)arg13 blkHepAudioOrigin:(double)arg14 vtExtraAudioAtStartInMs:(double)arg15 firstAudioSampleSensorTimestamp:(unsigned long long)arg16 isAnchorTimeBuffered:(_Bool)arg17 endpointHostTime:(unsigned long long)arg18;	// IMP=0x0010000000110d92

@end

