//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AudioToolboxCore/_AURemoteParameterSynchronization-Protocol.h>

@class AUAudioUnitPreset, AUAudioUnitProperty, AUAudioUnitViewConfiguration, AVAudioFormat, AVSpeechSynthesisProviderRequest, MIDICIProfile, NSArray, NSData, NSDictionary, NSObject, NSString;
@protocol OS_xpc_object;

@protocol AUAudioUnitXPCProtocol <_AURemoteParameterSynchronization>
- (void)getCustomMessageChannelFor:(NSString *)arg1 reply:(void (^)(NSError *, NSXPCListenerEndpoint *))arg2;
- (void)getSpeechVoices:(void (^)(NSError *, NSArray *))arg1;
- (void)cancelSpeechRequest:(void (^)(NSError *))arg1;
- (void)synthesizeSpeechRequest:(AVSpeechSynthesisProviderRequest *)arg1 reply:(void (^)(NSError *))arg2;
- (void)presetStateFor:(AUAudioUnitPreset *)arg1 reply:(void (^)(NSError *, NSDictionary *))arg2;
- (void)deleteUserPreset:(AUAudioUnitPreset *)arg1 reply:(void (^)(NSError *))arg2;
- (void)saveUserPreset:(AUAudioUnitPreset *)arg1 state:(NSDictionary *)arg2 reply:(void (^)(NSError *))arg3;
- (void)loadUserPresets:(void (^)(NSError *, NSArray *))arg1;
- (void)disableProfile:(MIDICIProfile *)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 reply:(void (^)(NSError *))arg4;
- (void)enableProfile:(MIDICIProfile *)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 reply:(void (^)(NSError *))arg4;
- (void)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2 reply:(void (^)(NSError *, MIDICIProfileState *))arg3;
- (void)selectViewConfiguration:(AUAudioUnitViewConfiguration *)arg1 reply:(void (^)(NSError *))arg2;
- (void)supportedViewConfigurations:(NSArray *)arg1 reply:(void (^)(NSError *, NSIndexSet *))arg2;
- (void)parametersForOverviewWithCount:(long long)arg1 reply:(void (^)(NSError *, NSArray *))arg2;
- (void)parameterNode:(NSString *)arg1 displayNameWithLength:(long long)arg2 reply:(void (^)(NSError *, NSString *))arg3;
- (void)parameterValueFromString:(NSString *)arg1 address:(unsigned long long)arg2 reply:(void (^)(NSError *, float))arg3;
- (void)parameterStringFromValue:(float)arg1 currentValue:(_Bool)arg2 address:(unsigned long long)arg3 reply:(void (^)(NSError *, NSString *))arg4;
- (void)getParameter:(unsigned long long)arg1 sequenceNumber:(unsigned int)arg2 reply:(void (^)(NSError *, float))arg3;
- (void)getParameterTree:(void (^)(NSError *, AUParameterTree *))arg1;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2 reply:(void (^)(NSError *, NSArray *))arg3;
- (void)valueForKey:(NSString *)arg1 reply:(void (^)(NSError *, id))arg2;
- (void)removePropertyObserver:(AUAudioUnitProperty *)arg1 context:(unsigned long long)arg2 reply:(void (^)(NSError *))arg3;
- (void)addPropertyObserver:(AUAudioUnitProperty *)arg1 context:(unsigned long long)arg2 reply:(void (^)(NSError *))arg3;
- (void)setValue:(id)arg1 forProperty:(AUAudioUnitProperty *)arg2 propagateError:(_Bool)arg3 reply:(void (^)(NSError *, NSArray *))arg4;
- (void)valueForProperty:(AUAudioUnitProperty *)arg1 propagateError:(_Bool)arg2 reply:(void (^)(NSError *, id))arg3;
- (void)setBusCount:(unsigned long long)arg1 scope:(unsigned int)arg2 reply:(void (^)(NSError *, NSArray *))arg3;
- (void)setBusFormat:(unsigned int)arg1 scope:(unsigned int)arg2 format:(AVAudioFormat *)arg3 reply:(void (^)(NSError *, NSArray *))arg4;
- (void)reset:(void (^)(NSError *))arg1;
- (void)uninitialize:(void (^)(NSError *))arg1;
- (void)updateWorkgroupMirror:(NSObject<OS_xpc_object> *)arg1 reply:(void (^)(NSError *))arg2;
- (void)destroyRenderPipe:(unsigned int)arg1 reply:(void (^)(NSError *))arg2;
- (void)createRenderPipe:(int)arg1 formats:(NSData *)arg2 maxFrames:(unsigned int)arg3 midiOutSizeHint:(unsigned int)arg4 resources:(NSObject<OS_xpc_object> *)arg5 reply:(void (^)(NSError *, unsigned int))arg6;
- (void)updateHostCallbacks:(unsigned long long)arg1 reply:(void (^)(NSError *))arg2;
- (void)initialize:(unsigned long long)arg1 reply:(void (^)(NSError *, unsigned long long, unsigned long long, unsigned long long, NSData *, _Bool, unsigned int))arg2;
- (void)getBusses:(unsigned int)arg1 reply:(void (^)(NSError *, NSArray *))arg2;
- (void)close:(void (^)(NSError *))arg1;
- (void)open:(void (^)(NSError *, _Bool, _Bool, NSArray *, NSArray *, _Bool, _Bool, int, unsigned long long, unsigned long long))arg1;
@end

