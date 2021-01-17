#pragma once
class AugmentType {
public:
	explicit AugmentType(const std::string& xmlstring);
	void make_augment(Augmentation& au);
	std::string get_idname() const { return idname_; }
	std::string get_name() const { return name_; }
	long get_id() const { return id_; }
	short get_type() const { return type_; }
	short get_attribute() const { return attribute_; }
	int get_effect() const { return effect_; }
	int get_max_age() const { return max_age_; }
	int get_min_age() const { return min_age_; }
	int get_cost() const { return cost_; }
	int get_difficulty() const { return difficulty_; }
	std::string get_description() const { return description_; }
	static int number_of_augmenttypes;
private:
	std::string idname_;
	std::string name_;
	short attribute_;
	int effect_;
	int max_age_;
	int min_age_;
	long id_;
	short type_;
	int cost_;
	int difficulty_;
	std::string description_;
};
