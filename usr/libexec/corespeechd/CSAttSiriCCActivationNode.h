//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriContConvController, CSAttSiriController, CSAttSiriOSDNode, NSArray, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface CSAttSiriCCActivationNode : NSObject
{
    _Bool _isReady;	// 8 = 0x8
    _Bool _didActivate;	// 9 = 0x9
    _Bool _canActivate;	// 10 = 0xa
    _Bool _startOfSpeechDetected;	// 11 = 0xb
    _Bool _deferredActivation;	// 12 = 0xc
    float _startOfSpeechPrependAudioDuration;	// 16 = 0x10
    float _startOfSpeechThresholdDuration;	// 20 = 0x14
    unsigned long long _type;	// 24 = 0x18
    NSArray *_requiredNodes;	// 32 = 0x20
    CSAttSiriController *_attSiriController;	// 40 = 0x28
    NSString *_mhId;	// 48 = 0x30
    CSAsset *_prefetchedAsset;	// 56 = 0x38
    CSAttSiriOSDNode *_osdNode;	// 64 = 0x40
    CSAttSiriContConvController *_ccCtrl;	// 72 = 0x48
    NSString *_deviceId;	// 80 = 0x50
    NSHashTable *_receivers;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_queue;	// 96 = 0x60
    double _firstSpeechFrameAudioTsInMs;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000000186ff
@property(nonatomic) _Bool deferredActivation; // @synthesize deferredActivation=_deferredActivation;
@property(nonatomic) _Bool startOfSpeechDetected; // @synthesize startOfSpeechDetected=_startOfSpeechDetected;
@property(nonatomic) double firstSpeechFrameAudioTsInMs; // @synthesize firstSpeechFrameAudioTsInMs=_firstSpeechFrameAudioTsInMs;
@property(nonatomic) float startOfSpeechThresholdDuration; // @synthesize startOfSpeechThresholdDuration=_startOfSpeechThresholdDuration;
@property(nonatomic) float startOfSpeechPrependAudioDuration; // @synthesize startOfSpeechPrependAudioDuration=_startOfSpeechPrependAudioDuration;
@property(nonatomic) _Bool canActivate; // @synthesize canActivate=_canActivate;
@property(nonatomic) _Bool didActivate; // @synthesize didActivate=_didActivate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSHashTable *receivers; // @synthesize receivers=_receivers;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(nonatomic, setter=registerCCCtrl:) __weak CSAttSiriContConvController *ccCtrl; // @synthesize ccCtrl=_ccCtrl;
@property(nonatomic, setter=registerOSDNode:) __weak CSAttSiriOSDNode *osdNode; // @synthesize osdNode=_osdNode;
@property(retain, nonatomic) CSAsset *prefetchedAsset; // @synthesize prefetchedAsset=_prefetchedAsset;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) __weak CSAttSiriController *attSiriController; // @synthesize attSiriController=_attSiriController;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)_notifyActivationWithStartSampleId:(unsigned long long)arg1;	// IMP=0x001000000001827f
- (void)_internalActivation;	// IMP=0x0010000000018079
- (void)reportBoronScore:(_Bool)arg1;	// IMP=0x001000000001802b
- (void)handleActivationSuccessfully:(_Bool)arg1 withStartSampleCount:(unsigned long long)arg2;	// IMP=0x0010000000017fd8
- (void)delayedActivation:(unsigned long long)arg1;	// IMP=0x0010000000017f89
- (void)_startActivation;	// IMP=0x0010000000017d60
- (void)attSiriNode:(id)arg1 didUpdateOSDFeatures:(id)arg2 withFrameDurationMs:(double)arg3;	// IMP=0x0010000000017cd3
- (void)_setAsset:(id)arg1;	// IMP=0x0010000000017be3
- (void)registerGazeNode:(id)arg1;	// IMP=0x0010000000017ab4
- (void)stop;	// IMP=0x00100000000179dc
- (void)pause;	// IMP=0x00100000000179d6
- (void)start;	// IMP=0x001000000001798b
- (void)removeReceiver:(id)arg1;	// IMP=0x0010000000017975
- (void)addReceiver:(id)arg1;	// IMP=0x001000000001787e
- (id)initWithAttSiriController:(id)arg1;	// IMP=0x0010000000017759

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
