/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface AWDSharingContinuityKeyboardSettings : PBCodable <NSCopying> {
    bool  _disabled;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int disabled : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool disabled;
@property (nonatomic) bool hasDisabled;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)disabled;
- (bool)hasDisabled;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setHasDisabled:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
