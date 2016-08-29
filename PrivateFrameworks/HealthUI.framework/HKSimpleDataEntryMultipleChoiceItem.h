/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSimpleDataEntryMultipleChoiceItem : NSObject <HKSimpleDataEntryItemType, UIPickerViewDataSource, UIPickerViewDelegate> {
    HKSimpleDataEntryPlainTextCell * _cell;
    NSArray * _choiceDisplayValues;
    NSArray * _choices;
    NSNumber * _chosenIndex;
    <HKSimpleDataEntryItemDelegate> * _delegate;
    UIPickerView * _picker;
    unsigned long long  _placeholderType;
    NSString * _registrantModelKey;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKSimpleDataEntryItemDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long placeholderType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setTextForInputTextField:(id)arg1;
- (void)_setupPlaceholder;
- (void)beginEditing;
- (id)cell;
- (id)delegate;
- (void)doneButtonTapped:(id)arg1;
- (id)formattedKeyAndValue;
- (id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 choices:(id)arg3 choiceDisplayNames:(id)arg4 defaultChoice:(id)arg5;
- (void)localeDidChange:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (unsigned long long)placeholderType;
- (void)setDelegate:(id)arg1;
- (void)setPlaceholderType:(unsigned long long)arg1;
- (void)updateCellDisplay;

@end